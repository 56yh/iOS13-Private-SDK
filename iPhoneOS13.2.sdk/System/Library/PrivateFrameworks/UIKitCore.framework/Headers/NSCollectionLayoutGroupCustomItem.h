//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface NSCollectionLayoutGroupCustomItem : NSObject <NSCopying>
{
    long long _zIndex;
    struct CGRect _frame;
}

+ (id)customItemWithFrame:(struct CGRect)arg1 zIndex:(long long)arg2;
+ (id)customItemWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 zIndex:(long long)arg2;

@end

