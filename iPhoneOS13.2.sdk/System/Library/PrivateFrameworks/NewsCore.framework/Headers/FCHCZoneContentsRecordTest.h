//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FCHCZoneContentsRecordTest : NSObject
{
    NSString *_recordType;
    NSArray *_unencryptedFields;
    NSArray *_encryptedFields;
    NSDictionary *_expectedValues;
}

@property(copy, nonatomic) NSDictionary *expectedValues; // @synthesize expectedValues=_expectedValues;
@property(copy, nonatomic) NSArray *encryptedFields; // @synthesize encryptedFields=_encryptedFields;
@property(copy, nonatomic) NSArray *unencryptedFields; // @synthesize unencryptedFields=_unencryptedFields;
@property(copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;

@end

