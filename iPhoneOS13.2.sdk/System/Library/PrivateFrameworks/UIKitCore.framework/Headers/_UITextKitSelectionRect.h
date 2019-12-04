//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface _UITextKitSelectionRect : UITextSelectionRect
{
    _Bool _containsEnd;
    _Bool _containsStart;
    _Bool _vertical;
    _Bool __drawsOwnHighlight;
    struct CGRect _rect;
}

+ (id)selectionRectWithRect:(struct CGRect)arg1 fromView:(id)arg2;
@property(nonatomic, setter=_setDrawsOwnHighlight:) _Bool _drawsOwnHighlight; // @synthesize _drawsOwnHighlight=__drawsOwnHighlight;
@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart=_containsStart;
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd=_containsEnd;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)description;
- (void)setRect:(struct CGRect)arg1 fromView:(id)arg2;
- (long long)writingDirection;

@end

