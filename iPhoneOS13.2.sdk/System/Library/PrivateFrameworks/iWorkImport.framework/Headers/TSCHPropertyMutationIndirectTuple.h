//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHPropertyMutationTuple.h>

__attribute__((visibility("hidden")))
@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple
{
    int mStyleOwnerType;
    unsigned long long mStyleOwnerIndex;
}

@property(readonly, nonatomic) unsigned long long index; // @synthesize index=mStyleOwnerIndex;
@property(readonly, nonatomic) int type; // @synthesize type=mStyleOwnerType;
- (id)styleOwnerRef;
- (id)indirectTuple;
- (id)styleOwner;
- (id)initWithStyleOwner:(id)arg1 mutations:(id)arg2;
- (id)initWithStyleOwnerType:(int)arg1 index:(unsigned long long)arg2 inChart:(id)arg3 mutations:(id)arg4;

@end

