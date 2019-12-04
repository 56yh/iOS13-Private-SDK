//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PLSInvitationRecipient-Protocol.h>

@class MFComposeRecipient, NSArray, NSMutableArray, NSString;

@interface PXInvitationRecipient : NSObject <PLSInvitationRecipient>
{
    MFComposeRecipient *_mfRecipient;
    NSString *_firstName;
    NSString *_lastName;
    NSMutableArray *_allEmails;
    NSMutableArray *_allPhones;
    NSString *_selectedPhoneString;
    NSString *_selectedEmailString;
    NSString *_invalidAddressString;
}

+ (id)validPhoneNumberFromString:(id)arg1;
+ (id)validEmailAddressFromComposeRecipient:(id)arg1;
@property(readonly, copy, nonatomic) NSString *invalidAddressString; // @synthesize invalidAddressString=_invalidAddressString;
@property(readonly, copy, nonatomic) NSString *selectedEmailString; // @synthesize selectedEmailString=_selectedEmailString;
@property(readonly, copy, nonatomic) NSString *selectedPhoneString; // @synthesize selectedPhoneString=_selectedPhoneString;
@property(readonly, retain, nonatomic) NSArray *allPhones; // @synthesize allPhones=_allPhones;
@property(readonly, retain, nonatomic) NSArray *allEmails; // @synthesize allEmails=_allEmails;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly, copy, nonatomic) NSString *firstName;
- (id)displayName;
- (id)initWithRecipient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

