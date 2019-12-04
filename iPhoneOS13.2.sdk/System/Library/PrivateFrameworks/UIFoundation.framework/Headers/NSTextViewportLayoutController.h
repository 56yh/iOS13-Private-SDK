//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSTextRange;
@protocol NSTextViewportElementProvider, NSTextViewportLayoutDelegate;

@interface NSTextViewportLayoutController : NSObject
{
    struct CGRect _viewportBounds;
    struct CGPoint _viewportOffset;
    NSTextRange *_viewportRange;
    NSArray *_viewportElements;
    NSMutableArray *_viewportLayoutObservers;
    _Bool _layoutIsValid;
    id <NSTextViewportLayoutDelegate> _delegate;
    id <NSTextViewportElementProvider> _elementProvider;
}

@property(readonly) struct CGRect viewportBounds; // @synthesize viewportBounds=_viewportBounds;
@property(readonly) __weak id <NSTextViewportElementProvider> elementProvider; // @synthesize elementProvider=_elementProvider;
@property __weak id <NSTextViewportLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeViewportLayoutObserver:(id)arg1;
- (void)addViewportLayoutObserver:(id)arg1;
- (id)textViewportElementForLocation:(id)arg1;
- (id)locationAtPoint:(struct CGPoint)arg1;
- (void)enumerateTextViewportElementsInRect:(struct CGRect)arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)textViewportElementsInRect:(struct CGRect)arg1;
- (id)textViewportElementAtPoint:(struct CGPoint)arg1;
@property(readonly) NSTextRange *viewportRange;
- (struct CGRect)viewport;
- (void)adjustViewport:(double)arg1;
- (double)relocateViewport:(id)arg1;
- (void)layoutViewport;
- (void)dealloc;
- (id)initWithElementProvider:(id)arg1;

@end

