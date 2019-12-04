//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDScrollView.h>

#import <SilexText/STAXElementOccluder-Protocol.h>

@class NSString, STAXCustomRotorProvider;
@protocol STScrollViewDelegate;

@interface STScrollView : TSDScrollView <STAXElementOccluder>
{
    id <STScrollViewDelegate> _scrollViewDelegate;
    STAXCustomRotorProvider *_customRotorProvider;
}

@property(retain, nonatomic) STAXCustomRotorProvider *customRotorProvider; // @synthesize customRotorProvider=_customRotorProvider;
@property(nonatomic) __weak id <STScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
- (_Bool)_accessibilityScrollingEnabled;
- (_Bool)shouldOccludeAccessibilityElement:(id)arg1;
- (id)accessibilityCustomRotors;
@property(readonly, nonatomic) _Bool isBouncing;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

