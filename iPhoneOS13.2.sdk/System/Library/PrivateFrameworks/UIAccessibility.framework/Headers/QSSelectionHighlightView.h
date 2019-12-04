//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface QSSelectionHighlightView : UIView
{
    _Bool _sentenceHighlight;
    NSArray *_highlightSelectionRects;
    UIColor *_selectionColor;
    UIColor *_underlineColor;
}

@property(nonatomic) _Bool sentenceHighlight; // @synthesize sentenceHighlight=_sentenceHighlight;
@property(retain, nonatomic) UIColor *underlineColor; // @synthesize underlineColor=_underlineColor;
@property(retain, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
@property(retain, nonatomic) NSArray *highlightSelectionRects; // @synthesize highlightSelectionRects=_highlightSelectionRects;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

