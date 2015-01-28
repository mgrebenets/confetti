//
//  L360ConfettiObject.h
//  L360ConfettiExample
//
//  Created by Mohammed Islam on 12/11/14.
//  Copyright (c) 2014 Life360. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface L360ConfettiObject : NSObject

/**
 *  Initializer
 *
 *  @param confettiView     confetti to add behaviors to.
 *  @param bounds           Keep the confetti within these bounds (used for confetti garbage collection)
 *  @param animator         A weak reference to animator is kept to help clean object up
 *  @param gravity          A weak reference to gravity is kept to help clean object up
 */
- (instancetype)initWithConfettiView:(UIView *)confettiView
                    keepWithinBounds:(CGRect)bounds
                            animator:(UIDynamicAnimator *)animator
                             gravity:(UIGravityBehavior *)gravity;

/**
 *  The initial trajectory of the object before gravity and resistence takes over
 *  It's in pixels/sec, so (10, -20) is 10 px/s towards the right and 20 px/s up
 *  DEFAULT: (0, 0)
 */
@property (nonatomic, assign) CGPoint linearVelocity;

/**
 *  The velocity (radials/sec) of initial spin before resistence takes over
 *  DEFAULT: 0.0
 */
@property (nonatomic, assign) CGFloat angularVelocity;

/**
 *  This determines how softly this object will float down
 *  DEFAULT: 1.0
 */
@property (nonatomic, assign) CGFloat density;

/**
 *  The way this item will fall based on the values given above
 */
@property (nonatomic, readonly) UIDynamicItemBehavior *fallingBehavior;

@end
