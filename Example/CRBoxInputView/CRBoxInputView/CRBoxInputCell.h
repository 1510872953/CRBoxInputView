//
//  CRBoxInputCell.h
//  CaiShenYe
//
//  Created by Chobits on 2019/1/3.
//  Copyright © 2019 Chobits. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CRBoxInputCellProperty.h"

NS_ASSUME_NONNULL_BEGIN

#define CRBoxCursoryAnimationKey @"CRBoxCursoryAnimationKey"
#define CRBoxInputCellID @"CRBoxInputCellID"

typedef void(^PlaceSubViewBlock)(UIView *contentView);
typedef UIView *_Nonnull(^CreateCustomSecurityViewBlock)(void);

@interface CRBoxInputCell : UICollectionViewCell

/**
 cursor
 You should not use these properties, unless you know what you are doing.
 */
@property (strong, nonatomic) UIView *cursorView;
@property (assign, nonatomic) BOOL ifNeedCursor;

/**
 boxInputCellProperty
 You should not use these properties, unless you know what you are doing.
 */
@property (strong, nonatomic) CRBoxInputCellProperty *boxInputCellProperty;
@property (copy, nonatomic) PlaceSubViewBlock placeSubViewBlock;
@property (copy, nonatomic) CreateCustomSecurityViewBlock createCustomSecurityViewBlock;

// You can inherit and rewrite
- (void)placeSubViews;

@end

NS_ASSUME_NONNULL_END
