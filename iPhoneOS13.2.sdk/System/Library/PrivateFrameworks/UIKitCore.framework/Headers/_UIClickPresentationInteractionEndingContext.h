//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIClickPresentation;

__attribute__((visibility("hidden")))
@interface _UIClickPresentationInteractionEndingContext : NSObject
{
    BOOL _didComplete;
    NSUInteger _reason;
    _UIClickPresentation *_presentation;
    id /* CDUnknownBlockType */ _alongsideActions;
    id /* CDUnknownBlockType */ _completion;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ alongsideActions; // @synthesize alongsideActions=_alongsideActions;
@property(nonatomic) __weak _UIClickPresentation *presentation; // @synthesize presentation=_presentation;
@property(nonatomic) NSUInteger reason; // @synthesize reason=_reason;
@property(nonatomic) BOOL didComplete; // @synthesize didComplete=_didComplete;
// - (void).cxx_destruct;

@end
