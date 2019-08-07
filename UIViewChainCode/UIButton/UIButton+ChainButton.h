//
//  UIButton+ChainButton.h
//  常用控件链式编程
//
//  Created by Macmini on 2019/8/7.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
/**
 返回UIButton的block
 
 @param button button
 */
typedef void(^ButtonReturn)(UIButton *button);
/**
 设置text,font,textColor
 
 @param text text
 @param font font
 @param color textColor
 @return UIButton对象
 */
typedef UIButton *_Nonnull(^Text_font_textColor)(NSString *text, UIFont *font, UIColor *color);




@interface UIButton (ChainButton)
/**
 创建button

 @param block ButtonReturn
 @return UIButton对象
 */
+ (instancetype)createButton:(ButtonReturn)block;
/**
 设置button text,font,textColor

 @return Text_font_textColor
 */
- (Text_font_textColor)text_font_textColor;
@end

NS_ASSUME_NONNULL_END
