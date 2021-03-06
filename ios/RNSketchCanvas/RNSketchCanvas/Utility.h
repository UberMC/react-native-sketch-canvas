//
//  Utility.h
//  RNSketchCanvas
//
//  Created by TERRY on 2018/5/8.
//  Copyright © 2018年 Terry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

CGPoint midPoint (CGPoint p1, CGPoint p2);

@interface Utility : NSObject

+ (void)drawPath:(UIBezierPath*)path
       inContext:(CGContextRef)context
     strokeWidth: (float)strokeWidth
     strokeColor: (UIColor*)strokeColor;
+ (void)addPointToPath: (UIBezierPath*)path
               toPoint: (CGPoint)point
         tertiaryPoint: (CGPoint)tPoint
         previousPoint: (CGPoint) pPoint;
+ (BOOL)isSameColor:(UIColor *)color1 color:(UIColor *)color2;

@end
