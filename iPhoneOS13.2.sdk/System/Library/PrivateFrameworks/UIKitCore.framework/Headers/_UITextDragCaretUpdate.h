//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBezierPath, UITextPosition, UITextRange;

__attribute__((visibility("hidden")))
@interface _UITextDragCaretUpdate : NSObject
{
    UITextPosition *position;
    UITextRange *range;
    UIBezierPath *maskPath;
    id /* block */ alongsideAnimations;
    id /* block */ completion;
    _Bool isAnimated;
}


@end

