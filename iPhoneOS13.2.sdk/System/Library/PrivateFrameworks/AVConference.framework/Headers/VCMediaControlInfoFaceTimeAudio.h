//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCMediaControlInfo.h>

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo
{
    unsigned int _controlInfoReceivedKbits;
    unsigned int _controlInfoReceivedPackets;
    unsigned int _controlInfoAudioPacketSize;
    unsigned int _controlInfoAudioTimestamp;
    double _controlInfoArrivalTime;
    CDStruct_b4442fdd _controlFeedbackParameter;
    _Bool _videoEnabled;
}

@property _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (int)setInfoUnserialized:(CDStruct_b4442fdd *)arg1 type:(unsigned int)arg2;
- (_Bool)hasInfoType:(unsigned int)arg1;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)getInfoUnserialized:(CDStruct_b4442fdd *)arg1 type:(unsigned int)arg2;
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_39aa150d *)arg3;
- (int)handleOptionalControlInfo:(CDStruct_39aa150d *)arg1;
- (id)description;
- (unsigned long long)serializedSize;
@property(readonly) unsigned long long feedbackSize;

@end

