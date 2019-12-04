//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFInvocable-Protocol.h>

@class NSLock, NSMutableArray, NSString;

@interface EFInvocationToken : NSObject <EFInvocable>
{
    NSLock *_lock;
    NSMutableArray *_blocks;
    _Bool _isInvoked;
    NSString *_label;
}

+ (id)tokenWithInvocationBlock:(id /* block */)arg1;
+ (id)tokenWithLabel:(id)arg1 invocationBlock:(id /* block */)arg2;
+ (id)_descriptionString;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)addInvocable:(id)arg1;
- (void)addInvocationBlock:(id /* block */)arg1;
@property(readonly, getter=isInvoked) _Bool invoked;
- (void)invoke;
- (void)removeAllInvocationBlocks;
- (id)_nts_consumeBlocks;
@property(readonly, copy) NSString *description;
- (id)initWithLabel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

