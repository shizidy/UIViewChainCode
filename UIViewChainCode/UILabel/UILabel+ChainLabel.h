//
//  UILabel+ChainLabel.h
//  常用控件链式编程
//
//  Created by Macmini on 2019/8/7.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 返回UILabel的block
 
 @param label label
 */
typedef void(^LabelReturn)(UILabel *label);
/**
 设置frame的block
 
 @param originX X
 @param originY Y
 @param width width
 @param height height
 @return UILabel对象
 */
typedef UILabel *_Nonnull(^LabelFrame)(CGFloat originX, CGFloat originY, CGFloat width, CGFloat height);
/**
 设置center的block
 
 @param pointX center.x
 @param pointY center.y
 @return UILabel对象
 */
typedef UILabel *_Nonnull(^LabelCenter)(CGFloat pointX, CGFloat pointY);
/**
 设置text,font,textColor

 @param text text
 @param font font
 @param color textColor
 @param textAlignment textAlignment
 @return UILabel对象
 */
typedef UILabel *_Nonnull(^Text_font_textColor_textAlignment)(NSString *text, UIFont *font, UIColor *color, NSTextAlignment textAlignment);
/**
 设置NumberOfLines

 @param lines lines
 @return UILabel对象
 */
typedef UILabel *_Nonnull(^LabelNumberOfLines)(NSInteger lines);
/**
 设置背景色
 
 @param color color
 @return UILabel对象
 */
typedef UILabel *_Nonnull(^LabelBackgroundColor)(UIColor *color);
/**
 设置layerRadius
 
 @param radius cornerRadius
 @param maskToBounds maskToBounds
 @return UILabel对象
 */
typedef UILabel *_Nonnull(^LabellayerRadius)(CGFloat radius, BOOL maskToBounds);
/**
 设置layerBorder
 
 @param width borderWidth
 @param color borderColor
 @return UILabel对象
 */
typedef UILabel *_Nonnull(^LabellayerBorder)(CGFloat width, UIColor *color);
/**
 设置textAlignment

 @param textAlignment textAlignment
 @return UILabel对象
 */
typedef UILabel *_Nonnull(^LabelTextAlignment)(NSTextAlignment textAlignment);

@interface UILabel (ChainLabel)

/**
 创建label
 
 @param block LabelReturn
 @return UILabel对象
 */
+ (instancetype)createLabel:(LabelReturn)block;
/**
 设置label的text,font,textColor
 
 @return Text_font_textColor
 */
- (Text_font_textColor_textAlignment)text_font_textColor_textAlignment;
/**
 设置labelNumberOfLines

 @return labelNumberOfLines
 */
- (LabelNumberOfLines)labelNumberOfLines;
/**
 设置textAlignment

 @return TextAlignment
 */
- (LabelTextAlignment)labelTextAlignment;


///**
// 设置frame
//
// @return FrameReturn
// */
//- (LabelFrame)labelFrame;
///**
// 设置center
//
// @return PointReturn
// */
//- (LabelCenter)labelCenter;
///**
// 设置BackgroundColor
//
// @return BackgroundColorReturn
// */
//- (LabelBackgroundColor)labelBackgroundColor;
///**
// 设置layerRadius
//
// @return layerRadiusReturn
// */
//- (LabellayerRadius)labellayerRadius;
///**
// 设置layerBorder
//
// @return layerBorderReturn
// */
//- (LabellayerBorder)labellayerBorder;
@end

NS_ASSUME_NONNULL_END
