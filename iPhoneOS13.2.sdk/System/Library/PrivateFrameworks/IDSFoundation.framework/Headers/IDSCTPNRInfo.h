//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSCTPNRInfo : NSObject
{
    NSString *_PLMN;
    NSString *_IMSI;
    NSString *_PNRPhoneNumber;
    NSString *_phoneBookNumber;
}

@property(retain, nonatomic) NSString *phoneBookNumber; // @synthesize phoneBookNumber=_phoneBookNumber;
@property(retain, nonatomic) NSString *PNRPhoneNumber; // @synthesize PNRPhoneNumber=_PNRPhoneNumber;
@property(retain, nonatomic) NSString *IMSI; // @synthesize IMSI=_IMSI;
@property(retain, nonatomic) NSString *PLMN; // @synthesize PLMN=_PLMN;
- (id)initWithIMSI:(id)arg1 PLMN:(id)arg2 PNRPhoneNumber:(id)arg3 phoneBookNumber:(id)arg4;

@end

