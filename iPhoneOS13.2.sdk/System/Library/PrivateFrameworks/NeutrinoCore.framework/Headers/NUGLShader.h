//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSString;

@interface NUGLShader : NUGLObject
{
    long long _compilationStatus;
    NSError *_compilationError;
    long long _type;
    NSString *_source;
}

@property(readonly) NSString *source; // @synthesize source=_source;
@property(readonly) long long type; // @synthesize type=_type;
- (void)_compile:(id)arg1;
- (_Bool)compile:(id)arg1 error:(out id *)arg2;
@property(readonly) unsigned int glStage;
@property(readonly) unsigned int glType;
- (void)delete;
- (void)generate:(id)arg1;
- (id)initWithType:(long long)arg1 source:(id)arg2;
- (id)init;

@end

