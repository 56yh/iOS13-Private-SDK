//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNFuture;

@interface CNUICoreContactTypeAssessor : NSObject
{
    CNFuture *_familyInfoFuture;
}

+ (id)keysToFetch;
@property(readonly, nonatomic) CNFuture *familyInfoFuture; // @synthesize familyInfoFuture=_familyInfoFuture;
- (long long)estiamtedTypeOfContact:(id)arg1;
- (id)initWithFamilyInfoFuture:(id)arg1;
- (id)initWithFamilyInfo:(id)arg1;
- (id)init;

@end

