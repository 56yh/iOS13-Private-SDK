//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCore/FMKeychainItem-Protocol.h>

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FMInternalKeychainItem : NSObject <FMKeychainItem>
{
    NSString *_password;
    NSDate *_lastModifyDate;
    NSDate *_creationDate;
    NSData *_rawData;
}

@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSDate *lastModifyDate; // @synthesize lastModifyDate=_lastModifyDate;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
// - (void).cxx_destruct;
- (id)initWithResults:(id)arg1;

@end

