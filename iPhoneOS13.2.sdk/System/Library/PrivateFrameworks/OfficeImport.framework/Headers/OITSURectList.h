//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSURectList : NSObject
{
    vector_a9587b3d mRectList;
}

+ (id)rectListWithDifference:(struct CGRect)arg1 withRect:(struct CGRect)arg2;
- (id).cxx_construct;
- (struct CGRect)rectAtIndex:(unsigned long long)arg1;
- (void)insertRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)addRect:(struct CGRect)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithRectList:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;

@end

