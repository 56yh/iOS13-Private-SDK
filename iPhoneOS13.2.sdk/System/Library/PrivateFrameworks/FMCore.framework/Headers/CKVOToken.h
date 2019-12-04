//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKVOToken : NSObject
{
    NSString *_keypath;
    long long _index;
    id /* block */ _block;
}

@property(readonly, copy, nonatomic) id /* block */ block; // @synthesize block=_block;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *keypath; // @synthesize keypath=_keypath;
@property(readonly, nonatomic) void *context;
- (id)description;
- (id)initWithKeyPath:(id)arg1 index:(long long)arg2 block:(id /* block */)arg3;

@end

