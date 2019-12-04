//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class CKRecord, NSData;

__attribute__((visibility("hidden")))
@interface MSPCloudContainerCachedRecord : NSObject <NSSecureCoding>
{
    CKRecord *_record;
    NSData *_contentsHash;
    NSData *_positionHash;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *positionHash; // @synthesize positionHash=_positionHash;
@property(retain, nonatomic) NSData *contentsHash; // @synthesize contentsHash=_contentsHash;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCloudRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;

@end

