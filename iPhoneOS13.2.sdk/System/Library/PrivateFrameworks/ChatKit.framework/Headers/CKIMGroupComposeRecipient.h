//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsAutocompleteUI/CNComposeRecipientGroup.h>

#import <ChatKit/CKIMComposeRecipient-Protocol.h>

@class CKIMComposeRecipient, NSArray, NSDate, NSString;

@interface CKIMGroupComposeRecipient : CNComposeRecipientGroup <CKIMComposeRecipient>
{
    NSString *_conversationGUID;
    NSArray *_composeRecipients;
    NSArray *_handles;
    NSDate *_lastMessageDate;
    CKIMComposeRecipient *_matchingRecipient;
    NSString *_detailsString;
}

+ (id)composeRecipientWithConversation:(id)arg1 searchTerm:(id)arg2 matchingRecipient:(id)arg3;
@property(retain, nonatomic) NSString *detailsString; // @synthesize detailsString=_detailsString;
@property(retain, nonatomic) CKIMComposeRecipient *matchingRecipient; // @synthesize matchingRecipient=_matchingRecipient;
@property(retain, nonatomic) NSDate *lastMessageDate; // @synthesize lastMessageDate=_lastMessageDate;
@property(retain, nonatomic) NSArray *handles; // @synthesize handles=_handles;
@property(readonly, nonatomic) NSArray *composeRecipients; // @synthesize composeRecipients=_composeRecipients;
@property(retain, nonatomic) NSString *conversationGUID; // @synthesize conversationGUID=_conversationGUID;
- (id)address;
- (id)compositeName;
- (_Bool)isRemovableFromSearchResults;
- (id)initWithGUID:(id)arg1 displayString:(id)arg2 detailsString:(id)arg3 handles:(id)arg4 lastMessageDate:(id)arg5 searchTerm:(id)arg6 matchingRecipient:(id)arg7;
- (void)dealloc;
- (void)releaseIMReferences;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

