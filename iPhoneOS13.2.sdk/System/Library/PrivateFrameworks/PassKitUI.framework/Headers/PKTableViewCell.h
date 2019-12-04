//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface PKTableViewCell : UITableViewCell
{
    _Bool _showsActionSpinner;
    UIColor *_highlightColor;
    UIColor *_checkmarkAccessoryColor;
    UIColor *_customAccessoryColor;
    double _minimumHeight;
}

@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) _Bool showsActionSpinner; // @synthesize showsActionSpinner=_showsActionSpinner;
@property(copy, nonatomic) UIColor *customAccessoryColor; // @synthesize customAccessoryColor=_customAccessoryColor;
@property(copy, nonatomic) UIColor *checkmarkAccessoryColor; // @synthesize checkmarkAccessoryColor=_checkmarkAccessoryColor;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_disclosureChevronImage:(_Bool)arg1;
- (id)_checkmarkImage:(_Bool)arg1;
- (void)pk_applyAppearance:(id)arg1;

@end

