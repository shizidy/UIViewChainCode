//
//  UIView+ChainView.m
//  常用控件链式编程
//
//  Created by Macmini on 2019/8/7.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import "UIView+ChainView.h"

@implementation UIView (ChainView)

+ (instancetype)createView:(ViewReturn)block {
    UIView *view = [[UIView alloc] init];
    block(view);
    return view;
}

- (ViewFrame)viewFrame{
    return ^UIView *(CGFloat originX, CGFloat originY, CGFloat width, CGFloat height) {
        self.frame = CGRectMake(originX, originY, width, height);
        return self;
    };
}

- (ViewCenter)viewCenter {
    return ^UIView *(CGFloat pointX, CGFloat pointY) {
        self.center = CGPointMake(pointX, pointY);
        return self;
    };
}

- (ViewBackgroundColor)viewBackgroundColor {
    return ^UIView *(UIColor *color) {
        self.backgroundColor = color;
        return self;
    };
}

- (ViewLayerRadius)viewLayerRadius {
    return ^UIView *(CGFloat radius, BOOL maskToBounds) {
        self.layer.cornerRadius = radius;
        if (maskToBounds) {
            self.layer.masksToBounds = maskToBounds;
        }
        return self;
    };
}
- (ViewLayerBorder)viewLayerBorder {
    return ^UIView *(CGFloat width, UIColor *color) {
        self.layer.borderWidth = width;
        if (color) {
            self.layer.borderColor = [color CGColor];
        }
        return self;
    };
}

@end
