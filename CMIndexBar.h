//
//  indexBar.h
//
//  Created by Craig Merchant on 07/04/2011.
//  Copyright 2011 RaptorApps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QuartzCore/QuartzCore.h"

@protocol CMIndexBarDelegate;

@interface CMIndexBar : UIView

- (void) setIndexes:(NSArray*)indexes;
- (void) clearIndex;

@property (nonatomic, weak) NSObject<CMIndexBarDelegate> *delegate;
@property (nonatomic, strong) UIColor *highlightedBackgroundColor;
@property (nonatomic, strong) UIFont *textFont;
@property (nonatomic, strong) UIColor *textColor;

@end

@protocol CMIndexBarDelegate<NSObject>

@optional

- (void)indexSelectionDidChange:(CMIndexBar*)indexBar index:(int)index title:(NSString*)title;

@end
