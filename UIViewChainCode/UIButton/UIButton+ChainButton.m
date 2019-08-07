//
//  UIButton+ChainButton.m
//  常用控件链式编程
//
//  Created by Macmini on 2019/8/7.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import "UIButton+ChainButton.h"

@implementation UIButton (ChainButton)

+ (instancetype)createButton:(ButtonReturn)block {
    UIButton *button = [[UIButton alloc] init];
    block(button);
    return button;
}

- (Text_font_textColor)text_font_textColor {
    return ^UIButton *(NSString *text, UIFont *font, UIColor *color) {
        [self setTitle:text forState:UIControlStateNormal];
        [self setTitleColor:color forState:UIControlStateNormal];
        self.titleLabel.font = font;
        return self;
    };
}


@end
