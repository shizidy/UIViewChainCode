//
//  ViewController.m
//  UIViewChainCode
//
//  Created by Macmini on 2019/8/7.
//  Copyright © 2019 Macmini. All rights reserved.
//

#import "ViewController.h"
#import "UIViewChainHeader.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    //创建UI
    [self setUI];
    // Do any additional setup after loading the view.
}

- (void)setUI {
    //添加view
    UIView *myView = [UIView createView:^(UIView * _Nonnull view) {
        view.viewFrame(0, 0, 200, 40);
        view.viewCenter(KscreenWidth/2, 50);
        view.viewLayerRadius(5, NULL);
        view.viewLayerBorder(2, [UIColor greenColor]);
        view.viewBackgroundColor([UIColor orangeColor]);
    }];
    [self.view addSubview:myView];
    //添加label
    UILabel *myLabel = [UILabel createLabel:^(UILabel * _Nonnull label) {
        label.viewFrame(0, 0, 200, 40);
        label.viewCenter(KscreenWidth/2, 50 + 40 + 10);
        label.viewLayerRadius(5, YES);
        label.viewLayerBorder(2, [UIColor blueColor]);
        label.viewBackgroundColor([UIColor grayColor]);
        label.text_font_textColor_textAlignment(@"我是label", [UIFont systemFontOfSize:16], [UIColor whiteColor], NSTextAlignmentCenter);
        label.labelNumberOfLines(0);
    }];
    [self.view addSubview:myLabel];
    //添加button
    UIButton *button = [UIButton createButton:^(UIButton * _Nonnull button) {
        button.viewFrame(0, 0, 200, 40);
        button.viewCenter(KscreenWidth/2, 50 + 40*2 + 10*2);
        button.viewLayerRadius(5, YES);
        button.viewLayerBorder(2, [UIColor orangeColor]);
        button.viewBackgroundColor([UIColor brownColor]);
        button.text_font_textColor(@"我是button", [UIFont systemFontOfSize:16], [UIColor whiteColor]);
    }];
    [self.view addSubview:button];
    //添加textField
    UITextField *textField = [UITextField createTextField:^(UITextField * _Nonnull textField) {
        textField.viewFrame(0, 0, 200, 40);
        textField.viewCenter(KscreenWidth/2, 50 + 40*3 + 10*3);
        textField.viewLayerRadius(5, NULL);
        textField.viewLayerBorder(2, [UIColor redColor]);
        textField.viewBackgroundColor([UIColor whiteColor]);
        textField.text_font_textColor_placeHolder(@"", [UIFont systemFontOfSize:16], [UIColor blackColor], @"我是placeHolder");
        textField.textFieldViewMode(UITextFieldViewModeNever, UITextFieldViewModeNever, UITextFieldViewModeAlways);
    }];
    [self.view addSubview:textField];
}


@end
