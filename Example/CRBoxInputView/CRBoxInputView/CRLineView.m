//
//  CRLineView.m
//  CRBoxInputView_Example
//
//  Created by Chobits on 2019/6/10.
//  Copyright © 2019 BearRan. All rights reserved.
//

#import "CRLineView.h"

@interface CRLineView()
{
    
}
@end

@implementation CRLineView

- (instancetype)init
{
    self = [super init];
    if (self) {
        [self createUI];
    }
    return self;
}

- (void)createUI
{
    static CGFloat sepLineViewHeight = 4;
    
    _lineView = [UIView new];
    [self addSubview:_lineView];
    _lineView.backgroundColor = color_master;
    _lineView.layer.cornerRadius = sepLineViewHeight / 2.0;
    [_lineView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.height.mas_equalTo(sepLineViewHeight);
        make.left.right.bottom.offset(0);
    }];
    
    _lineView.layer.shadowColor = [color_master colorWithAlphaComponent:0.2].CGColor;
    _lineView.layer.shadowOpacity = 1;
    _lineView.layer.shadowOffset = CGSizeMake(0, 2);
    _lineView.layer.shadowRadius = 4;
}

@end