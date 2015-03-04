counter = 0

class SoundTransform:
    def __init__(self):
        global counter
        self.id = counter
        counter = counter + 1
    def setInputSoundStream(self, soundStream):
        pass

    def setOutputSoundStream(self, soundStream):
        pass

    def clone(self):
        raise NotImplementedError

class VolumeSoundTransform(SoundTransform):
    def __init__(self, *args):
        SoundTransform.__init__(self)
        global counter
        if (len(args) == 1 and type(args[0]) is float):
            self.volumeFraction = args[0]
        elif (len(args) == 1 and type(args[0]) is VolumeSoundTransform):
              self.volumeFraction = args[0].volumeFraction

    def clone(self):
        print("clone of volume" + str(self.id))
        return VolumeSoundTransform(self)

class MixSoundTransform(SoundTransform):
    def __init__(self, *args):
        SoundTransform.__init__(self)
        if (len(args) == 1 and type(args[0]) is list):
            self.mix = []
            for transform in args[0]:
                self.mix.append(transform.clone())
        elif (len(args) == 1 and type(args[0] is MixSoundTransform)):
            self.mix = []
            for transform in args[0].mix:
                self.mix.append(transform.clone())
    def clone(self):
        print("clone of mix" + str(self.id))
        return MixSoundTransform(self)


pipeline1 = MixSoundTransform([VolumeSoundTransform(0.5), MixSoundTransform([VolumeSoundTransform(1.5), VolumeSoundTransform(2.0)])])
pipeline2 = pipeline1.clone()
                               
transforms = [ VolumeSoundTransform(0.5), VolumeSoundTransform(1.0) ]

for transform in transforms:
    transform.clone()

    VolumeSoundTransform(3.0)
