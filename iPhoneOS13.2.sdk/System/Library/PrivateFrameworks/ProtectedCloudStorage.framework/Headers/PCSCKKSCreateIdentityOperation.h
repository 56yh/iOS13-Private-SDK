//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation
{
    PCSCKKSItemModifyContext *_context;
}

@property(retain) PCSCKKSItemModifyContext *context; // @synthesize context=_context;
- (void)itemStored:(id)arg1;
- (void)setIdentityToCurrent;
- (int)addAndNotifyOnSync:(struct _PCSIdentityData *)arg1 attributes:(struct __CFDictionary *)arg2 returnAttributes:(const struct __CFDictionary **)arg3 complete:(id /* block */)arg4;
- (void)storePCSIdentity:(struct _PCSIdentityData *)arg1;
- (void)createManateePCSIdentity;
- (void)start;
- (id)initWithItemModifyContext:(id)arg1;

@end

