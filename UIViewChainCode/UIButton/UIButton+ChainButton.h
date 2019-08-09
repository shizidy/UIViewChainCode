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
typedef UIButton *_Nonnull(^Text_font_textColor_controlState)(NSString *text, UIFont *font, UIColor *color, UIControlState controlState);
/**
 设置image, controlState

 @param imageName imageName
 @param controlState controlState
 @return UIButton对象
 */
typedef UIButton *_Nonnull(^Image_controlState)(NSString *imageName, UIControlState controlState);
/**
 设置backgroundImage, controlState

 @param imageName imageName
 @param controlState controlState
 @return UIButton对象
 */
typedef UIButton *_Nonnull(^BackgroundImage_controlState)(NSString *imageName, UIControlState controlState);
/**
 设置button点击事件

 @param target target
 @param selector selector选择器
 @param events 事件类型
 @return UIButton对象
 */
typedef UIButton *_Nonnull(^Target_selector_events)(id target, SEL selector, UIControlEvents events);


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
- (Text_font_textColor_controlState)text_font_textColor_controlState;
/**
 设置button image

 @return Image_controlState
 */
- (Image_controlState)image_controlState;
/**
 设置button BackgroundImage

 @return BackgroundImage_controlState
 */
- (BackgroundImage_controlState)backgroundImage_controlState;
/**
 设置button点击事件

 @return Target_selector_events
 */
- (Target_selector_events)target_selector_events;
@end

NS_ASSUME_NONNULL_END
