//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions
{
    _Bool _completeDataPromise;
    _Bool _createAsMobileBackup;
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool createAsMobileBackup; // @synthesize createAsMobileBackup=_createAsMobileBackup;
@property(nonatomic) _Bool completeDataPromise; // @synthesize completeDataPromise=_completeDataPromise;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationMetadata:(id)arg1;

@end

