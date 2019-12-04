//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSData, NSSet, NSString;

@interface CRKOpenFilesRequest : CATTaskRequest
{
    _Bool _autoAccept;
    NSSet *_fileItems;
    NSString *_senderName;
    NSData *_previewImageData;
    NSString *_sourceBundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(nonatomic) _Bool autoAccept; // @synthesize autoAccept=_autoAccept;
@property(copy, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(copy, nonatomic) NSSet *fileItems; // @synthesize fileItems=_fileItems;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

