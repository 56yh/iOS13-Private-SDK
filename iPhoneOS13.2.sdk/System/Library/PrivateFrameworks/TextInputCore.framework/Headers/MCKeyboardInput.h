//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSMutableArray;

@interface MCKeyboardInput : NSObject <NSCopying>
{
    NSMutableArray *_mutableInputs;
    unsigned long long _composingInputIndex;
}

@property(nonatomic) unsigned long long composingInputIndex; // @synthesize composingInputIndex=_composingInputIndex;
- (_Bool)hasKindOf:(Class)arg1;
- (void)insertInput:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceComposingInputWith:(id)arg1;
- (void)replaceInputAtIndex:(unsigned long long)arg1 with:(id)arg2;
- (void)removeInputAtIndex:(unsigned long long)arg1;
- (void)removeComposingInput;
- (void)removeAllInputs;
- (void)composeNew:(id)arg1;
- (_Bool)canComposeNew:(id)arg1;
@property(retain, nonatomic) MCKeyboardInput *composingInput;
@property(readonly, nonatomic) NSArray *inputs;
@property(readonly, nonatomic) NSMutableArray *mutableInputs; // @synthesize mutableInputs=_mutableInputs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (_Bool)hasDrawInput;
- (id)_asInputStringWithCursorIndex:(unsigned long long *)arg1 remainingComposingInputIndex:(unsigned long long *)arg2 typeInputs:(id)arg3 forSearch:(_Bool)arg4 suffix:(id)arg5;
- (void)_addNearbyKeys:(id)arg1 to:(void *)arg2;
- (id)asMecabraGestures:(_Bool *)arg1;
- (id)asSearchString;
- (_Bool)hasRemainingComposingInput;
- (unsigned long long)asInlineTextCursorIndex;
- (id)asCommittedText;
- (id)asInlineText;

@end

