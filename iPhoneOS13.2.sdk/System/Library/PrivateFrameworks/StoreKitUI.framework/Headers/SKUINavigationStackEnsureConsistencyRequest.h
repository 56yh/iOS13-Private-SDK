//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



__attribute__((visibility("hidden")))
@interface SKUINavigationStackEnsureConsistencyRequest : NSObject <NSCopying>
{
    _Bool _operationDidComplete;
    long long _navigationControllerOperation;
}

@property(readonly, nonatomic) _Bool operationDidComplete; // @synthesize operationDidComplete=_operationDidComplete;
@property(readonly, nonatomic) long long navigationControllerOperation; // @synthesize navigationControllerOperation=_navigationControllerOperation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNavigationControllerOperation:(long long)arg1 operationDidComplete:(_Bool)arg2;

@end

