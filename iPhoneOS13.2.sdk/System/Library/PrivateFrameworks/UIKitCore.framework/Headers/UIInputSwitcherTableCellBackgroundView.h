//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCellBackgroundView : UIView
{
    _Bool _selected;
    _Bool _drawsOpaque;
    _Bool _drawsBorder;
    _Bool _usesDarkTheme;
    unsigned long long _roundedCorners;
}

@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic) _Bool drawsBorder; // @synthesize drawsBorder=_drawsBorder;
@property(nonatomic) _Bool drawsOpaque; // @synthesize drawsOpaque=_drawsOpaque;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void)drawRect:(struct CGRect)arg1;

@end

