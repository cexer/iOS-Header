//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSExternalPluginBase.h>

#import <MPSNeuralNetwork/MPSExternalCNNBinary-Protocol.h>

@class NSString;

@interface MPSExternalCNNBinary : MPSExternalPluginBase <MPSExternalCNNBinary>
{
}

- (unsigned long long)encodeBatchWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const CDStruct_551bb076 *)arg4;
- (unsigned long long)encodeWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const CDStruct_c2cd3a9e *)arg4;
- (unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 primaryTexture:(id)arg4 primaryInfo:(const CDStruct_12100558 *)arg5 secondaryTexture:(id)arg6 secondaryInfo:(const CDStruct_12100558 *)arg7 destinationTexture:(id)arg8 destinationInfo:(const CDStruct_5948169e *)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

