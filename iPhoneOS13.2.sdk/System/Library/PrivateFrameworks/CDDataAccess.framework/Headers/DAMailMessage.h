//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface DAMailMessage : NSObject <NSCoding>
{
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rfc822Data;
- (int)smimeType;
- (_Bool)verbIsSet;
- (_Bool)flaggedIsSet;
- (_Bool)readIsSet;
- (id)preview;
- (id)instanceID;
- (id)serverID;
- (id)clientID;
- (_Bool)isDraft;
- (id)bcc;
- (id)sender;
- (int)lastVerb;
- (id)folderID;
- (id)longID;
- (id)remoteID;
- (id)conversationIndex;
- (id)conversationId;
- (id)threadTopic;
- (_Bool)meetingRequestIsActionable;
- (id)meetingRequestMetaData;
- (id)meetingRequestUUID;
- (id)attachments;
- (id)messageClass;
- (int)bodyTruncated;
- (int)bodySize;
- (int)bodyType;
- (id)body;
- (_Bool)flagged;
- (_Bool)read;
- (int)importance;
- (id)displayTo;
- (id)subject;
- (id)date;
- (id)replyTo;
- (id)from;
- (id)cc;
- (id)to;

@end

