//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/PMLTransformerProtocol-Protocol.h>

@class NSArray, NSMethodSignature, NSString;

@interface SGStringPreprocessingTransformer : NSObject <PMLTransformerProtocol>
{
    NSArray *_methodNames;
    NSArray *_methodValues;
    NSMethodSignature *_methodSignatureNoValue;
    NSMethodSignature *_methodSignatureWithValue;
}

+ (id)withMethods:(id)arg1;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToStringPreprocessingTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (void)applySelector:(SEL)arg1 preprocesor:(id)arg2 string:(id)arg3 value:(id)arg4;
- (SEL)selectorForMethod:(id)arg1 preprocessor:(id)arg2;
- (id)transformBatch:(id)arg1;
- (id)transform:(id)arg1;
- (id)initWithMethods:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

