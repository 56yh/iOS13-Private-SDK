//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSharegroupToken.h>



__attribute__((visibility("hidden")))
@interface TSCH3DSharegroupPoolSharegroupToken : TSCH3DSharegroupToken <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)token;
+ (id)_singletonAlloc;
- (_Bool)isOneShot;
- (void)flushTokenSharegroup;
- (void)deleteTokenSharegroup;
- (_Bool)shouldGarbageCollect;
- (void)releaseSharegroup:(id)arg1;
- (void)didRemoveAllInterests;
- (id)tokenSharegroup;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

