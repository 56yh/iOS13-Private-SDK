//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class CKDAppContainerTuple, NSString;

__attribute__((visibility("hidden")))
@interface CKDAppContainerAccountTuple : NSObject <NSCopying>
{
    CKDAppContainerTuple *_appContainerTuple;
    NSString *_accountID;
}

@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) CKDAppContainerTuple *appContainerTuple; // @synthesize appContainerTuple=_appContainerTuple;
- (id)description;
- (id)CKPropertiesDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppContainerTuple:(id)arg1 accountID:(id)arg2;

@end

