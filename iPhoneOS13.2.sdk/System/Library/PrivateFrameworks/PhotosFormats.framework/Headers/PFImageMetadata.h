//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFImageMetadata : NSObject
{
}

+ (_Bool)queryImagePropertiesOfFileAtURL:(id)arg1 error:(id *)arg2 block:(id /* block */)arg3;
+ (_Bool)writeMetadataType:(unsigned char)arg1 value:(id)arg2 toCGImageProperties:(id)arg3 error:(id *)arg4;
+ (_Bool)readMetadataType:(unsigned char)arg1 fromCGImageProperties:(id)arg2 value:(id *)arg3 error:(id *)arg4;
+ (_Bool)readMetadataType:(unsigned char)arg1 fromFileURL:(id)arg2 value:(id *)arg3 error:(id *)arg4;
+ (id)imagePropertiesByRemovingKey:(const void *)arg1 dictionaryKey:(const void *)arg2 fromImageProperties:(id)arg3;
+ (_Bool)readMetadataValueFromImageAtFileURL:(id)arg1 dictionaryKey:(const void *)arg2 key:(const void *)arg3 value:(id *)arg4 error:(id *)arg5;
+ (id)valueFromCGImageProperties:(id)arg1 dictionaryKey:(const void *)arg2 key:(const void *)arg3;

@end

