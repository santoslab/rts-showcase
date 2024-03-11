// #Sireum

package art

import org.sireum._

@sig trait TimerCallback {
  def callback(): Unit
}

@ext object ArtTimer {

  def schedule(id: String, replaceExisting: B, delay: Art.Time, callback: () => Unit): Unit = $

  // if transpiling then use this version as transpiler does not support function passing
  def scheduleTrait(id: String, replaceExisting: B, delay: Art.Time, callback: TimerCallback): Unit = $

  def cancel(id: String): Unit = $
}
