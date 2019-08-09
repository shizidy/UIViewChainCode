//
//  UITextField+ChainTextField.m
//  常用控件链式编程
//
//  Created by Macmini on 2019/8/7.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import "UITextField+ChainTextField.h"

@implementation UITextField (ChainTextField)

+ (instancetype)createTextField:(TextFieldReturn)block {
    UITextField *textField = [[UITextField alloc] init];
    block(textField);
    return textField;
}

- (Text_font_textColor_placeHolder)text_font_textColor_placeHolder {
    return ^UITextField *(NSString *text, UIFont *font, UIColor *color, NSString *placeHolder) {
        self.text = text;
        self.textColor = color;
        self.font = font;
        self.placeholder = placeHolder;
        return self;
    };
}

- (TextFieldViewMode)textFieldViewMode {
    return ^UITextField *(UITextFieldViewMode leftViewModel, UITextFieldViewMode rightViewModel, UITextFieldViewMode clearButtonModel) {
        if (leftViewModel) {
            self.leftViewMode = leftViewModel;
        }
        if (rightViewModel) {
            self.leftViewMode = rightViewModel;
        }
        if (clearButtonModel) {
            self.clearButtonMode = clearButtonModel;
        }
        
        return self;
    };
}

- (TextFieldTextAlignment)textFieldTextAlignment {
    return ^UITextField *(NSTextAlignment textAlignment) {
        self.textAlignment = textAlignment;
        return self;
    };
}

@end
