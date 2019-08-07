//
//  UITextField+ChainTextField.h
//  常用控件链式编程
//
//  Created by Macmini on 2019/8/7.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 返回UITextField的block
 
 @param textField textField
 */
typedef void(^TextFieldReturn)(UITextField *textField);
/**
 设置text,font,textColor
 
 @param text text
 @param font font
 @param color textColor
 @return UITextField对象
 */
typedef UITextField *_Nonnull(^Text_font_textColor_placeHolder)(NSString *text, UIFont *font, UIColor *color, NSString *placeHolder);
typedef UITextField *_Nonnull(^TextFieldViewMode)(UITextFieldViewMode leftViewModel, UITextFieldViewMode rightViewModel, UITextFieldViewMode clearButtonModel);


@interface UITextField (ChainTextField)
/**
 创建UITextField
 
 @param block TextFieldReturn
 @return UITextField对象
 */
+ (instancetype)createTextField:(TextFieldReturn)block;
/**
 设置textField text,font,textColor
 
 @return Text_font_textColor
 */
- (Text_font_textColor_placeHolder)text_font_textColor_placeHolder;
- (TextFieldViewMode)textFieldViewMode;
@end

NS_ASSUME_NONNULL_END
