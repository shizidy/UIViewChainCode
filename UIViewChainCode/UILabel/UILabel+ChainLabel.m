//
//  UILabel+ChainLabel.m
//  常用控件链式编程
//
//  Created by Macmini on 2019/8/7.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import "UILabel+ChainLabel.h"

@implementation UILabel (ChainLabel)

+ (instancetype)createLabel:(LabelReturn)block {
    UILabel *label = [[UILabel alloc] init];
    block(label);
    return label;
}

- (Text_font_textColor_textAlignment)text_font_textColor_textAlignment {
    return ^UILabel *(NSString *text, UIFont *font, UIColor *color, NSTextAlignment textAlignment) {
        self.text = text;
        self.font = font;
        self.textColor = color;
        self.textAlignment = textAlignment;
        return self;
    };
}

- (LabelNumberOfLines)labelNumberOfLines {
    return ^UILabel *(NSInteger lines) {
        self.numberOfLines = lines;
        return self;
    };
}



//- (LabelFrame)labelFrame {
//    return ^UILabel *(CGFloat originX, CGFloat originY, CGFloat width, CGFloat height) {
//        self.frame = CGRectMake(originX, originY, width, height);
//        return self;
//    };
//}
//
//- (LabelCenter)labelCenter {
//    return ^UILabel *(CGFloat pointX, CGFloat pointY) {
//        self.center = CGPointMake(pointX, pointY);
//        return self;
//    };
//}
//
//
//- (LabelBackgroundColor)labelBackgroundColor {
//    return ^UILabel *(UIColor *color) {
//        self.backgroundColor = color;
//        return self;
//    };
//}
//
//- (LabellayerRadius)labellayerRadius {
//    return ^UILabel *(CGFloat radius, BOOL maskToBounds) {
//        self.layer.cornerRadius = radius;
//        if (maskToBounds) {
//            self.layer.masksToBounds = maskToBounds;
//        }
//        return self;
//    };
//}
//
//- (LabellayerBorder)labellayerBorder {
//    return ^UILabel *(CGFloat width, UIColor *color) {
//        self.layer.borderWidth = width;
//        if (color) {
//            self.layer.borderColor = [color CGColor];
//        }
//        return self;
//    };
//}

@end
