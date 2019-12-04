//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUTextDrawingContext, NSString;

@interface MPUTextDrawingView : UIView
{
    double _cachedDisplayScale;
    MPUTextDrawingContext *_textDrawingContext;
}

@property(retain, nonatomic) MPUTextDrawingContext *textDrawingContext; // @synthesize textDrawingContext=_textDrawingContext;
- (double)_cachedDisplayScale;
@property(readonly, nonatomic) NSString *text;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

