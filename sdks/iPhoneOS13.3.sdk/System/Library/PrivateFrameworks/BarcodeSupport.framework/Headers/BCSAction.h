//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSActionPrivate-Protocol.h>

@class BCSActionPickerViewAssistant, NSArray, NSDictionary, NSString, NSURL;
@protocol BCSActionDelegate, BCSCodePayload, BCSParsedDataPrivate;

__attribute__((visibility("hidden")))
@interface BCSAction : NSObject <BCSActionPrivate>
{
    BCSActionPickerViewAssistant *_actionPickerViewAssistant;
    BOOL isInvalidDataAction;
    BOOL isWiFiAction;
    id <BCSActionDelegate> delegate;
    NSURL *urlThatCanBeOpened;
    NSArray *appLinks;
    id <BCSParsedDataPrivate> _data;
    NSURL *_url;
    id <BCSCodePayload> _codePayload;
}

+ (void)getActionWithData:(id)arg1 codePayload:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) id <BCSCodePayload> codePayload; // @synthesize codePayload=_codePayload;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) id <BCSParsedDataPrivate> data; // @synthesize data=_data;
@property(readonly, nonatomic) BOOL isWiFiAction; // @synthesize isWiFiAction;
@property(readonly, nonatomic) BOOL isInvalidDataAction; // @synthesize isInvalidDataAction;
@property(readonly, copy, nonatomic) NSArray *appLinks; // @synthesize appLinks;
@property(readonly, nonatomic) NSURL *urlThatCanBeOpened; // @synthesize urlThatCanBeOpened;
@property(nonatomic) __weak id <BCSActionDelegate> delegate; // @synthesize delegate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long codeType;
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
- (void)determineActionabilityWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)debugDescriptionExtraInfoDictionary;
@property(readonly, copy, nonatomic) NSDictionary *debugDescriptionDictionary;
@property(readonly, copy, nonatomic) NSArray *actionPickerItems;
@property(readonly, copy, nonatomic) NSString *defaultActionTargetApplicationBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionDescription;
- (void)performDefaultAction;
@property(readonly, copy, nonatomic) NSString *localizedActionDescription;
@property(readonly, copy, nonatomic) NSString *localizedDefaultActionTitle;
- (void)showActionPicker;
- (void)performAction;
- (long long)type;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;

@end

