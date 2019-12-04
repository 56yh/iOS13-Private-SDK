//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, NSURL;

@interface IMDSharedUtilitiesPluginPayload : NSObject
{
    _Bool _isFromMe;
    NSData *_data;
    NSString *_messageGUID;
    id _dataDetectedResult;
    NSURL *_url;
    id _datasource;
    NSString *_pluginBundleID;
    NSArray *_consumedSessionPayloads;
    NSArray *_attachments;
}

@property(nonatomic) _Bool isFromMe; // @synthesize isFromMe=_isFromMe;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSArray *consumedSessionPayloads; // @synthesize consumedSessionPayloads=_consumedSessionPayloads;
@property(retain, nonatomic) NSString *pluginBundleID; // @synthesize pluginBundleID=_pluginBundleID;
@property(nonatomic) __weak id datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) id dataDetectedResult; // @synthesize dataDetectedResult=_dataDetectedResult;
@property(copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;

@end

