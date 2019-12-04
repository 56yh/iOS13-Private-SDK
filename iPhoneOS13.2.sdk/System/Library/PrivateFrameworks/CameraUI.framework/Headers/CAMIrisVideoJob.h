//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSError, NSString, NSURL;

@interface CAMIrisVideoJob : NSObject <NSSecureCoding>
{
    NSURL *_videoURL;
    NSString *_stillImagePersistenceUUID;
    NSString *_videoPersistenceUUID;
    NSString *_irisIdentifier;
    long long _captureDevice;
    long long _captureOrientation;
    double _captureTime;
    NSError *_captureError;
    NSString *_filterName;
    NSURL *_filteredVideoURL;
    long long _persistenceOptions;
    long long _temporaryPersistenceOptions;
    NSString *_bundleIdentifier;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillImageDisplayTime;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long temporaryPersistenceOptions; // @synthesize temporaryPersistenceOptions=_temporaryPersistenceOptions;
@property(nonatomic) long long persistenceOptions; // @synthesize persistenceOptions=_persistenceOptions;
@property(readonly, nonatomic) NSURL *filteredVideoURL; // @synthesize filteredVideoURL=_filteredVideoURL;
@property(readonly, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(readonly, nonatomic) NSError *captureError; // @synthesize captureError=_captureError;
@property(readonly, nonatomic) double captureTime; // @synthesize captureTime=_captureTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 stillImageDisplayTime; // @synthesize stillImageDisplayTime=_stillImageDisplayTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long captureOrientation; // @synthesize captureOrientation=_captureOrientation;
@property(readonly, nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property(readonly, nonatomic) NSString *irisIdentifier; // @synthesize irisIdentifier=_irisIdentifier;
@property(readonly, nonatomic) NSString *videoPersistenceUUID; // @synthesize videoPersistenceUUID=_videoPersistenceUUID;
@property(readonly, nonatomic) NSString *stillImagePersistenceUUID; // @synthesize stillImagePersistenceUUID=_stillImagePersistenceUUID;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, nonatomic, getter=isCTMVideo) _Bool CTMVideo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoURL:(id)arg1 stillImagePersistenceUUID:(id)arg2 videoPersistenceUUID:(id)arg3 irisIdentifier:(id)arg4 captureDevice:(long long)arg5 captureOrientation:(long long)arg6 duration:(CDStruct_1b6d18a9)arg7 stillImageDisplayTime:(CDStruct_1b6d18a9)arg8 captureTime:(double)arg9 captureError:(id)arg10 filterName:(id)arg11 filteredVideoURL:(id)arg12 persistenceOptions:(long long)arg13 temporaryPersistenceOptions:(long long)arg14 bundleIdentifier:(id)arg15;

@end

